#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}

namespace android::media
{
	class Session2Command_Result : public __JniBaseClass
	{
	public:
		// Fields
		static jint RESULT_ERROR_UNKNOWN_ERROR();
		static jint RESULT_INFO_SKIPPED();
		static jint RESULT_SUCCESS();
		
		Session2Command_Result(QAndroidJniObject obj);
		// Constructors
		Session2Command_Result(jint &arg0, android::os::Bundle &arg1);
		Session2Command_Result() = default;
		
		// Methods
		jint getResultCode();
		QAndroidJniObject getResultData();
	};
} // namespace android::media

