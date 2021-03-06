#ifndef VT100_H
#define VT100_H

#include <base.h>
#include <drivers/common.h>

void vt100_curs_mov(const struct screen_coord pos);
void vt100_curs_invis(void);
void vt100_curs_vis(void);
void vt100_scr_clear(void);
void vt100_ln_clear(void);

#endif /* VT100_H */
