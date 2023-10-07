/*
 * This file is part of c-adt-numeric (https://github.com/padawanphysicist/c-adt-numeric).
 *
 * c-adt-numeric is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option) any
 * later version.
 *
 * c-adt-numeric is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * c-adt-numeric. If not, see <https://www.gnu.org/licenses/>.
 */

/** 
 * @file num.h
 * @brief Interface of the Abstract Data Type (ADT).
 * @details This should encapsulate any routine working with numbers.
 */
#ifndef __NUM_H__
#define __NUM_H__

/**
 * This should be used in the initialization of the variable
 */
extern const void* num;

/**
 * Type associated with the class
 *
 * Objects of this type may directly be created by the user.
 * 
 */
typedef void* num_t;

/**
 * Returns the real part of \p _self (\f$x\f$), \f$\mathrm{Re}(x)\f$.
 */
num_t
num_real_part (const num_t _self);

/**
 * Returns the imaginary part of \p _self (\f$x\f$), \f$\mathrm{Im}(x)\f$.
 */
num_t
num_imag_part (const num_t _self);

/**
 * Returns the complex conjugate of \p _self (\f$x\f$), \f$x^\ast\f$.
 */
num_t
num_conjugate (const num_t _self);

/**
 * Returns the negative of \p _self (\f$x\f$), \f$-x\f$.
 */
num_t
num_negative (const num_t _self);

/**
 * returns the addition of \p _self (\f$x\f$) and \p _other (\f$y\f$), \f$x + y\f$.
 */
num_t
num_add (const num_t _self, const num_t _other);

/**
 * returns the subtraction of \p _self (\f$x\f$) and \p _other (\f$y\f$), \f$x - y\f$.
 */
num_t
num_sub (const num_t _self, const num_t _other);

/**
 * returns the multiplication of \p _self (\f$x\f$) and \p _other (\f$y\f$), \f$x\cdot y\f$.
 */
num_t
num_mul (const num_t _self, const num_t _other);

/**
 * returns the division of \p _self (\f$x\f$) and \p _other (\f$y\f$), \f$x/y\f$.
 */
num_t
num_div (const num_t _self, const num_t _other);

/**
 * Converts numeric types to machine's double.
 */
void
num_to_double (double* res, const num_t _self);

/**
 * This function determines whether \p _self (\f$x\f$) and \p _other (\f$y\f$),
 * are approximately equal to a relative accuracy.
 */
int
num_eq (const num_t _self, const num_t _other);

#endif /* __NUM_H__ */