// megafunction wizard: %Altera Soft LVDS v15.0%
// GENERATION: XML
// mipi_lvds.v

// Generated using ACDS version 15.0 139

`timescale 1 ps / 1 ps
module mipi_lvds (
		input  wire       rx_inclock,  //  rx_inclock.rx_inclock
		input  wire [3:0] rx_in,       //       rx_in.rx_in
		output wire [7:0] rx_out,      //      rx_out.rx_out
		output wire       rx_outclock, // rx_outclock.rx_outclock
		output wire       rx_locked    //   rx_locked.rx_locked
	);

	mipi_lvds_0002 mipi_lvds_inst (
		.rx_inclock            (rx_inclock),  //  rx_inclock.rx_inclock
		.rx_in                 (rx_in),       //       rx_in.rx_in
		.rx_out                (rx_out),      //      rx_out.rx_out
		.rx_outclock           (rx_outclock), // rx_outclock.rx_outclock
		.rx_locked             (rx_locked),   //   rx_locked.rx_locked
		.rx_data_align         (1'b0),        // (terminated)
		.rx_channel_data_align (4'b0000),     // (terminated)
		.rx_cda_reset          (4'b0000),     // (terminated)
		.rx_data_align_reset   (1'b0)         // (terminated)
	);

endmodule
// Retrieval info: <?xml version="1.0"?>
//<!--
//	Generated by Altera MegaWizard Launcher Utility version 1.0
//	************************************************************
//	THIS IS A WIZARD-GENERATED FILE. DO NOT EDIT THIS FILE!
//	************************************************************
//	Copyright (C) 1991-2015 Altera Corporation
//	Any megafunction design, and related net list (encrypted or decrypted),
//	support information, device programming or simulation file, and any other
//	associated documentation or information provided by Altera or a partner
//	under Altera's Megafunction Partnership Program may be used only to
//	program PLD devices (but not masked PLD devices) from Altera.  Any other
//	use of such megafunction design, net list, support information, device
//	programming or simulation file, or any other related documentation or
//	information is prohibited for any other purpose, including, but not
//	limited to modification, reverse engineering, de-compiling, or use with
//	any other silicon devices, unless such use is explicitly licensed under
//	a separate agreement with Altera or a megafunction partner.  Title to
//	the intellectual property, including patents, copyrights, trademarks,
//	trade secrets, or maskworks, embodied in any such megafunction design,
//	net list, support information, device programming or simulation file, or
//	any other related documentation or information provided by Altera or a
//	megafunction partner, remains with Altera, the megafunction partner, or
//	their respective licensors.  No other licenses, including any licenses
//	needed under any third party's intellectual property, are provided herein.
//-->
// Retrieval info: <instance entity-name="altera_soft_lvds" version="15.0" >
// Retrieval info: 	<generic name="DEVICE_FAMILY" value="MAX 10" />
// Retrieval info: 	<generic name="FUNCTIONAL_MODE" value="RX" />
// Retrieval info: 	<generic name="NUMBER_OF_CHANNELS" value="4" />
// Retrieval info: 	<generic name="DESERIALIZATION_FACTOR" value="2" />
// Retrieval info: 	<generic name="USE_EXTERNAL_PLL_UI" value="false" />
// Retrieval info: 	<generic name="INPUT_DATA_RATE" value="732.0" />
// Retrieval info: 	<generic name="VALID_FREQ" value="366.00" />
// Retrieval info: 	<generic name="ENABLE_RX_LOCKED_PORT_UI" value="true" />
// Retrieval info: 	<generic name="ENABLE_TX_LOCKED_PORT_UI" value="false" />
// Retrieval info: 	<generic name="ENABLE_PLL_ARESET_PORT_UI" value="false" />
// Retrieval info: 	<generic name="ENABLE_PLL_TX_DATA_RESET_PORT_UI" value="false" />
// Retrieval info: 	<generic name="ENABLE_PLL_RX_DATA_RESET_PORT_UI" value="false" />
// Retrieval info: 	<generic name="COMMON_RX_TX_PLL_UI" value="false" />
// Retrieval info: 	<generic name="PLL_SELF_RESET_ON_LOSS_LOCK_UI" value="false" />
// Retrieval info: 	<generic name="INCLOCK_PERIOD_UI" value="100.0" />
// Retrieval info: 	<generic name="PORT_RX_DATA_ALIGN_UI" value="false" />
// Retrieval info: 	<generic name="PORT_RX_CHANNEL_DATA_ALIGN_UI" value="false" />
// Retrieval info: 	<generic name="PORT_RX_DATA_ALIGN_RESET_UI" value="false" />
// Retrieval info: 	<generic name="REGISTERED_DATA_ALIGN_INPUT_UI" value="false" />
// Retrieval info: 	<generic name="DATA_ALIGN_ROLLOVER" value="8" />
// Retrieval info: 	<generic name="REGISTERED_OUTPUT_UI" value="true" />
// Retrieval info: 	<generic name="ENABLE_TX_OUTCLOCK_PORT_UI" value="true" />
// Retrieval info: 	<generic name="OUTCLOCK_DIVIDE_BY_UI" value="" />
// Retrieval info: 	<generic name="OUTCLOCK_DUTY_CYCLE_UI" value="" />
// Retrieval info: 	<generic name="TX_OUTCLOCK_PHASE_SHIFT_UI" value="0.00" />
// Retrieval info: 	<generic name="TX_INCLOCK_PHASE_SHIFT_UI" value="0.00" />
// Retrieval info: 	<generic name="RX_INCLOCK_PHASE_SHIFT_UI" value="0.00" />
// Retrieval info: 	<generic name="RX_OUTCLOCK_PHASE_SHIFT_UI" value="0.00" />
// Retrieval info: 	<generic name="REGISTERED_INPUT_ENABLED_UI" value="false" />
// Retrieval info: 	<generic name="REGISTERED_INPUT_UI" value="tx_coreclock" />
// Retrieval info: 	<generic name="ENABLE_TX_CORECLOCK_PORT_UI" value="false" />
// Retrieval info: 	<generic name="OUTCLOCK_RESOURCE_UI" value="Auto selection" />
// Retrieval info: 	<generic name="BUFFER_IMPLEMENTATION_RAM_UI" value="false" />
// Retrieval info: 	<generic name="BUFFER_IMPLEMENTATION_MUX_UI" value="false" />
// Retrieval info: 	<generic name="BUFFER_IMPLEMENTATION_LE_UI" value="false" />
// Retrieval info: 	<generic name="IMPLEMENT_IN_LES" value="ON" />
// Retrieval info: 	<generic name="CARRY_CHAIN_LENGTH" value="48" />
// Retrieval info: 	<generic name="DPA_INITIAL_PHASE_VALUE" value="0" />
// Retrieval info: 	<generic name="DPLL_LOCK_COUNT" value="0" />
// Retrieval info: 	<generic name="DPLL_LOCK_WINDOW" value="0" />
// Retrieval info: 	<generic name="INCLOCK_BOOST" value="0" />
// Retrieval info: 	<generic name="SIM_DPA_NET_PPM_VARIATION" value="0" />
// Retrieval info: 	<generic name="SIM_DPA_OUTPUT_CLOCK_PHASE_SHIFT" value="0" />
// Retrieval info: 	<generic name="CARRY_CHAIN" value="MANUAL" />
// Retrieval info: 	<generic name="CYCLONEII_M4K_COMPATIBILITY" value="ON" />
// Retrieval info: 	<generic name="ENABLE_DPA_ALIGN_TO_RISING_EDGE_ONLY" value="OFF" />
// Retrieval info: 	<generic name="ENABLE_DPA_CALIBRATION" value="ON" />
// Retrieval info: 	<generic name="ENABLE_DPA_INITIAL_PHASE_SELECTION" value="OFF" />
// Retrieval info: 	<generic name="ENABLE_DPA_MODE" value="OFF" />
// Retrieval info: 	<generic name="ENABLE_DPA_PLL_CALIBRATION" value="OFF" />
// Retrieval info: 	<generic name="ENABLE_SOFT_CDR_MODE" value="OFF" />
// Retrieval info: 	<generic name="INCLOCK_DATA_ALIGNMENT" value="EDGE_ALIGNED" />
// Retrieval info: 	<generic name="LOW_POWER_MODE" value="AUTO" />
// Retrieval info: 	<generic name="SIM_DPA_IS_NEGATIVE_PPM_DRIFT" value="OFF" />
// Retrieval info: 	<generic name="USE_DPLL_RAWPERROR" value="OFF" />
// Retrieval info: 	<generic name="USE_NO_PHASE_SHIFT" value="ON" />
// Retrieval info: 	<generic name="X_ON_BITSLIP" value="ON" />
// Retrieval info: 	<generic name="DIFFERENTIAL_DRIVE" value="0" />
// Retrieval info: 	<generic name="ENABLE_CLK_LATENCY" value="OFF" />
// Retrieval info: 	<generic name="MULTI_CLOCK" value="OFF" />
// Retrieval info: 	<generic name="OUTCLOCK_ALIGNMENT" value="EDGE_ALIGNED" />
// Retrieval info: 	<generic name="PLL_COMPENSATION_MODE" value="AUTO" />
// Retrieval info: 	<generic name="PREEMPHASIS_SETTING" value="0" />
// Retrieval info: 	<generic name="VOD_SETTING" value="0" />
// Retrieval info: </instance>
// IPFS_FILES : mipi_lvds.vo
// RELATED_FILES: mipi_lvds.v, mipi_lvds_0002.v
