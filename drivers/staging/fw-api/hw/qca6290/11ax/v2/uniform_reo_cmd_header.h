/*
 * Copyright (c) 2016-2018 The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _UNIFORM_REO_CMD_HEADER_H_
#define _UNIFORM_REO_CMD_HEADER_H_
#if !defined(__ASSEMBLER__)
#endif


// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	reo_cmd_number[15:0], reo_status_required[16], reserved_0a[31:17]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_UNIFORM_REO_CMD_HEADER 1

struct uniform_reo_cmd_header {
             uint32_t reo_cmd_number                  : 16, //[15:0]
                      reo_status_required             :  1, //[16]
                      reserved_0a                     : 15; //[31:17]
};

/*

reo_cmd_number
			
			Consumer: REO/SW/DEBUG
			
			Producer: SW 
			
			
			
			This number can be used by SW to track, identify and
			link the created commands with the command statusses
			
			
			
			
			
			<legal all> 

reo_status_required
			
			Consumer: REO
			
			Producer: SW 
			
			
			
			<enum 0 NoStatus> REO does not need to generate a status
			TLV for the execution of this command
			
			<enum 1 StatusRequired> REO shall generate a status TLV
			for the execution of this command
			
			
			
			<legal all>

reserved_0a
			
			<legal 0>
*/


/* Description		UNIFORM_REO_CMD_HEADER_0_REO_CMD_NUMBER
			
			Consumer: REO/SW/DEBUG
			
			Producer: SW 
			
			
			
			This number can be used by SW to track, identify and
			link the created commands with the command statusses
			
			
			
			
			
			<legal all> 
*/
#define UNIFORM_REO_CMD_HEADER_0_REO_CMD_NUMBER_OFFSET               0x00000000
#define UNIFORM_REO_CMD_HEADER_0_REO_CMD_NUMBER_LSB                  0
#define UNIFORM_REO_CMD_HEADER_0_REO_CMD_NUMBER_MASK                 0x0000ffff

/* Description		UNIFORM_REO_CMD_HEADER_0_REO_STATUS_REQUIRED
			
			Consumer: REO
			
			Producer: SW 
			
			
			
			<enum 0 NoStatus> REO does not need to generate a status
			TLV for the execution of this command
			
			<enum 1 StatusRequired> REO shall generate a status TLV
			for the execution of this command
			
			
			
			<legal all>
*/
#define UNIFORM_REO_CMD_HEADER_0_REO_STATUS_REQUIRED_OFFSET          0x00000000
#define UNIFORM_REO_CMD_HEADER_0_REO_STATUS_REQUIRED_LSB             16
#define UNIFORM_REO_CMD_HEADER_0_REO_STATUS_REQUIRED_MASK            0x00010000

/* Description		UNIFORM_REO_CMD_HEADER_0_RESERVED_0A
			
			<legal 0>
*/
#define UNIFORM_REO_CMD_HEADER_0_RESERVED_0A_OFFSET                  0x00000000
#define UNIFORM_REO_CMD_HEADER_0_RESERVED_0A_LSB                     17
#define UNIFORM_REO_CMD_HEADER_0_RESERVED_0A_MASK                    0xfffe0000


#endif // _UNIFORM_REO_CMD_HEADER_H_
