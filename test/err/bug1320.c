/*
  Copyright 2020 The cc65 Authors

  This software is provided "as-is", without any express or implied
  warranty. In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications; and, to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated, but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

/*
  Test of a post-counted pointer argument,
  followed by a (nested) function-call argument.

  https://github.com/cc65/cc65/issues/1320

  After the bug is fixed, this file should be moved to "test/misc/".
*/

static char *var;

void foo (char *, char);
char bar (void);

void main (void)
{
    foo (var++, bar ());
}
