#pragma once

#include "../../JObject.hpp"

namespace android::hardware
{
	class DataSpace : public JObject
	{
	public:
		// Fields
		static jint DATASPACE_ADOBE_RGB();
		static jint DATASPACE_BT2020();
		static jint DATASPACE_BT2020_PQ();
		static jint DATASPACE_BT601_525();
		static jint DATASPACE_BT601_625();
		static jint DATASPACE_BT709();
		static jint DATASPACE_DCI_P3();
		static jint DATASPACE_DISPLAY_P3();
		static jint DATASPACE_JFIF();
		static jint DATASPACE_SCRGB();
		static jint DATASPACE_SCRGB_LINEAR();
		static jint DATASPACE_SRGB();
		static jint DATASPACE_SRGB_LINEAR();
		static jint DATASPACE_UNKNOWN();
		static jint RANGE_EXTENDED();
		static jint RANGE_FULL();
		static jint RANGE_LIMITED();
		static jint RANGE_UNSPECIFIED();
		static jint STANDARD_ADOBE_RGB();
		static jint STANDARD_BT2020();
		static jint STANDARD_BT2020_CONSTANT_LUMINANCE();
		static jint STANDARD_BT470M();
		static jint STANDARD_BT601_525();
		static jint STANDARD_BT601_525_UNADJUSTED();
		static jint STANDARD_BT601_625();
		static jint STANDARD_BT601_625_UNADJUSTED();
		static jint STANDARD_BT709();
		static jint STANDARD_DCI_P3();
		static jint STANDARD_FILM();
		static jint STANDARD_UNSPECIFIED();
		static jint TRANSFER_GAMMA2_2();
		static jint TRANSFER_GAMMA2_6();
		static jint TRANSFER_GAMMA2_8();
		static jint TRANSFER_HLG();
		static jint TRANSFER_LINEAR();
		static jint TRANSFER_SMPTE_170M();
		static jint TRANSFER_SRGB();
		static jint TRANSFER_ST2084();
		static jint TRANSFER_UNSPECIFIED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DataSpace(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DataSpace(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jint getRange(jint arg0);
		static jint getStandard(jint arg0);
		static jint getTransfer(jint arg0);
		static jint pack(jint arg0, jint arg1, jint arg2);
	};
} // namespace android::hardware

