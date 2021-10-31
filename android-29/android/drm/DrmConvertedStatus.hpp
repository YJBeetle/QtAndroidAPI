#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::drm
{
	class DrmConvertedStatus : public __JniBaseClass
	{
	public:
		// Fields
		static jint STATUS_ERROR();
		static jint STATUS_INPUTDATA_ERROR();
		static jint STATUS_OK();
		jbyteArray convertedData();
		jint offset();
		jint statusCode();
		
		DrmConvertedStatus(QAndroidJniObject obj);
		// Constructors
		DrmConvertedStatus(jint arg0, jbyteArray arg1, jint arg2);
		DrmConvertedStatus() = default;
		
		// Methods
	};
} // namespace android::drm

