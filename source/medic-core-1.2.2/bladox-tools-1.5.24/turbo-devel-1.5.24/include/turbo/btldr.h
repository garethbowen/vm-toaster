/*
 * Copyright (c) 2004, 2005, 2006 BLADOX, s.r.o.
 * All Rights Reserved.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, 
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR 
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE BLADOX OR CONTRIBUTORS BE 
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF 
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS 
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF 
 * THE POSSIBILITY OF SUCH DAMAGE.  
 */

#ifndef _TURBO_BTLDR_H_
#define _TURBO_BTLDR_H_

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define D_ATTR_CONF_BTLDR_LOCKED        0x11
#define D_ATTR_CONF_OTA_ALLOWED         0x12
#define D_ATTR_CONF_FAKE_ATR            0x13
#define D_ATTR_CONF_RESET_LOCKED        0x14
#define D_ATTR_CONF_APP_LOCKED          0x15
#define D_ATTR_CONF_SN_LOCKED           0x16
#define D_ATTR_CONF_TPIN_LOCKED         0x17
#define D_ATTR_CONF_OTA_PLAINTEXT       0x18
#define D_ATTR_CONF_MENU_ALPHA          0x19
#define D_ATTR_CONF_INIT_BOOSTER        0x1a
// 1e max

#define D_ATTR_XCONF_MAC                0x40
#define D_ATTR_XCONF_TPIN               0x41
#define D_ATTR_XCONF_BTLDR_KEY          0x42
#define D_ATTR_XCONF_D_KEY              0x43
#define D_ATTR_XCONF_E_KEY              0x44
#define D_ATTR_XCONF_ATR                0x45
#define D_ATTR_XCONF_OTA_MSISDN         0x46
#define D_ATTR_XCONF_OTA_IP             0x47
#define D_ATTR_XCONF_KILL               0x48
#define D_ATTR_XCONF_KILL_KEY    	0x49

#define UCMD_BTLDR_MODE_ENTER 0xC0
#define UCMD_BTLDR_MODE_EXIT 0xC1
#define UCMD_BTLDR_MODE_INIT 0xC2
#define UCMD_BTLDR_MODE_WRITE_PAGE_FLASH 0xC3
#define UCMD_BTLDR_MODE_READ_PAGE_FLASH 0xC4
#define UCMD_BTLDR_MODE_WRITE_PAGE_EEPROM 0xC5
#define UCMD_BTLDR_MODE_READ_PAGE_EEPROM 0xC6

#define UCMD_BTLDR_MODE_SET_HWD         0xCA
#define UCMD_BTLDR_MODE_FAST_BTLDR      0xCB

#define UCMD_BTLDR_MODE_SET_SPEED       0xd0
#define UCMD_BTLDR_MODE_GET_SN          0xd1
#define UCMD_BTLDR_MODE_SET_ATTR        0xd2

#ifdef __cplusplus
}
#endif

#endif
