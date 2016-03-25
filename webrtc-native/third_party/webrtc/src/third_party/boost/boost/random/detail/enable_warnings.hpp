/* boost random/detail/enable_warnings.hpp header file
 *
 * Copyright Steven Watanabe 2009
 * Distributed under the Boost Software License, Version 1.0. (See
 * accompanying file LICENSE_1_0.txt or copy at
 * http://www.boost.org/LICENSE_1_0.txt)
 *
 * See http://www.boost.org for most recent version including documentation.
 *
 * $Id: enable_warnings.hpp 57008 2009-10-19 22:53:04Z steven_watanabe $
 *
 */

// No #include guard.  This header is intended to be included multiple times.

#ifdef BOOST_MSVC
#pragma warning(pop)
#endif