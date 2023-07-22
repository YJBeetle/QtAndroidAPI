#pragma once

#include "./DataSpace.def.hpp"

namespace android::hardware
{
	// Fields
	inline jint DataSpace::DATASPACE_ADOBE_RGB()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"DATASPACE_ADOBE_RGB"
		);
	}
	inline jint DataSpace::DATASPACE_BT2020()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"DATASPACE_BT2020"
		);
	}
	inline jint DataSpace::DATASPACE_BT2020_PQ()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"DATASPACE_BT2020_PQ"
		);
	}
	inline jint DataSpace::DATASPACE_BT601_525()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"DATASPACE_BT601_525"
		);
	}
	inline jint DataSpace::DATASPACE_BT601_625()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"DATASPACE_BT601_625"
		);
	}
	inline jint DataSpace::DATASPACE_BT709()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"DATASPACE_BT709"
		);
	}
	inline jint DataSpace::DATASPACE_DCI_P3()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"DATASPACE_DCI_P3"
		);
	}
	inline jint DataSpace::DATASPACE_DISPLAY_P3()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"DATASPACE_DISPLAY_P3"
		);
	}
	inline jint DataSpace::DATASPACE_JFIF()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"DATASPACE_JFIF"
		);
	}
	inline jint DataSpace::DATASPACE_SCRGB()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"DATASPACE_SCRGB"
		);
	}
	inline jint DataSpace::DATASPACE_SCRGB_LINEAR()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"DATASPACE_SCRGB_LINEAR"
		);
	}
	inline jint DataSpace::DATASPACE_SRGB()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"DATASPACE_SRGB"
		);
	}
	inline jint DataSpace::DATASPACE_SRGB_LINEAR()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"DATASPACE_SRGB_LINEAR"
		);
	}
	inline jint DataSpace::DATASPACE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"DATASPACE_UNKNOWN"
		);
	}
	inline jint DataSpace::RANGE_EXTENDED()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"RANGE_EXTENDED"
		);
	}
	inline jint DataSpace::RANGE_FULL()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"RANGE_FULL"
		);
	}
	inline jint DataSpace::RANGE_LIMITED()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"RANGE_LIMITED"
		);
	}
	inline jint DataSpace::RANGE_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"RANGE_UNSPECIFIED"
		);
	}
	inline jint DataSpace::STANDARD_ADOBE_RGB()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"STANDARD_ADOBE_RGB"
		);
	}
	inline jint DataSpace::STANDARD_BT2020()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"STANDARD_BT2020"
		);
	}
	inline jint DataSpace::STANDARD_BT2020_CONSTANT_LUMINANCE()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"STANDARD_BT2020_CONSTANT_LUMINANCE"
		);
	}
	inline jint DataSpace::STANDARD_BT470M()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"STANDARD_BT470M"
		);
	}
	inline jint DataSpace::STANDARD_BT601_525()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"STANDARD_BT601_525"
		);
	}
	inline jint DataSpace::STANDARD_BT601_525_UNADJUSTED()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"STANDARD_BT601_525_UNADJUSTED"
		);
	}
	inline jint DataSpace::STANDARD_BT601_625()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"STANDARD_BT601_625"
		);
	}
	inline jint DataSpace::STANDARD_BT601_625_UNADJUSTED()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"STANDARD_BT601_625_UNADJUSTED"
		);
	}
	inline jint DataSpace::STANDARD_BT709()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"STANDARD_BT709"
		);
	}
	inline jint DataSpace::STANDARD_DCI_P3()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"STANDARD_DCI_P3"
		);
	}
	inline jint DataSpace::STANDARD_FILM()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"STANDARD_FILM"
		);
	}
	inline jint DataSpace::STANDARD_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"STANDARD_UNSPECIFIED"
		);
	}
	inline jint DataSpace::TRANSFER_GAMMA2_2()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"TRANSFER_GAMMA2_2"
		);
	}
	inline jint DataSpace::TRANSFER_GAMMA2_6()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"TRANSFER_GAMMA2_6"
		);
	}
	inline jint DataSpace::TRANSFER_GAMMA2_8()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"TRANSFER_GAMMA2_8"
		);
	}
	inline jint DataSpace::TRANSFER_HLG()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"TRANSFER_HLG"
		);
	}
	inline jint DataSpace::TRANSFER_LINEAR()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"TRANSFER_LINEAR"
		);
	}
	inline jint DataSpace::TRANSFER_SMPTE_170M()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"TRANSFER_SMPTE_170M"
		);
	}
	inline jint DataSpace::TRANSFER_SRGB()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"TRANSFER_SRGB"
		);
	}
	inline jint DataSpace::TRANSFER_ST2084()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"TRANSFER_ST2084"
		);
	}
	inline jint DataSpace::TRANSFER_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.hardware.DataSpace",
			"TRANSFER_UNSPECIFIED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint DataSpace::getRange(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.hardware.DataSpace",
			"getRange",
			"(I)I",
			arg0
		);
	}
	inline jint DataSpace::getStandard(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.hardware.DataSpace",
			"getStandard",
			"(I)I",
			arg0
		);
	}
	inline jint DataSpace::getTransfer(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.hardware.DataSpace",
			"getTransfer",
			"(I)I",
			arg0
		);
	}
	inline jint DataSpace::pack(jint arg0, jint arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.hardware.DataSpace",
			"pack",
			"(III)I",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace android::hardware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware;
#endif
