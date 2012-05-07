/*
 * Split narrow string functions
 *
 * Copyright (c) 2008-2012, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBCPATH_INTERNAL_NARROW_SPLIT_STRING_H )
#define _LIBCPATH_INTERNAL_NARROW_SPLIT_STRING_H

#include <common.h>
#include <types.h>

#include "libcpath_extern.h"
#include "libcpath_libcerror.h"
#include "libcpath_types.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct libcpath_internal_narrow_split_string libcpath_internal_narrow_split_string_t;

struct libcpath_internal_narrow_split_string
{
	/* The number of string segments
	 */
	int number_of_segments;

	/* The string
	 */
	char *string;

	/* The string size
	 */
	size_t string_size;

	/* The segments
	 */
	char **segments;

	/* The segment sizes
	 */
	size_t *segment_sizes;
};

int libcpath_narrow_split_string_initialize(
     libcpath_narrow_split_string_t **split_string,
     const char *string,
     size_t string_size,
     int number_of_segments,
     libcerror_error_t **error );

LIBCPATH_EXTERN \
int libcpath_narrow_split_string_free(
     libcpath_narrow_split_string_t **split_string,
     libcerror_error_t **error );

LIBCPATH_EXTERN \
int libcpath_narrow_split_string_get_string(
     libcpath_narrow_split_string_t *split_string,
     char **string,
     size_t *string_size,
     libcerror_error_t **error );

LIBCPATH_EXTERN \
int libcpath_narrow_split_string_get_number_of_segments(
     libcpath_narrow_split_string_t *split_string,
     int *number_of_segments,
     libcerror_error_t **error );

LIBCPATH_EXTERN \
int libcpath_narrow_split_string_get_segment_by_index(
     libcpath_narrow_split_string_t *split_string,
     int segment_index,
     char **string_segment,
     size_t *string_segment_size,
     libcerror_error_t **error );

LIBCPATH_EXTERN \
int libcpath_narrow_split_string_set_segment_by_index(
     libcpath_narrow_split_string_t *split_string,
     int segment_index,
     char *string_segment,
     size_t string_segment_size,
     libcerror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif

