/*! \file
 * \brief 4-bit ADPCM data
 *
 * Copyright (C) 2008, Digium, Inc.
 *
 * Distributed under the terms of the GNU General Public License
 *
 */

static uint8_t ex_adpcm[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static struct ast_frame *adpcm_sample(void)
{
	static struct ast_frame f = {
		.frametype = AST_FRAME_VOICE,
		.datalen = sizeof(ex_adpcm),
		.samples = ARRAY_LEN(ex_adpcm) * 2,
		.mallocd = 0,
		.offset = 0,
		.src = __PRETTY_FUNCTION__,
		.data.ptr = ex_adpcm,
	};

	f.subclass.format = ast_format_adpcm;

	return &f;
}
