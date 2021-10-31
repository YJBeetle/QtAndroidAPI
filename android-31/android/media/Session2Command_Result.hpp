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
		
		// QJniObject forward
		template<typename ...Ts> explicit Session2Command_Result(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Session2Command_Result(QJniObject obj);
		
		// Constructors
		Session2Command_Result(jint arg0, android::os::Bundle arg1);
		
		// Methods
		jint getResultCode();
		android::os::Bundle getResultData();
	};
} // namespace android::media

