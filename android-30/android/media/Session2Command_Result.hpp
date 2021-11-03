#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Bundle;
}

namespace android::media
{
	class Session2Command_Result : public JObject
	{
	public:
		// Fields
		static jint RESULT_ERROR_UNKNOWN_ERROR();
		static jint RESULT_INFO_SKIPPED();
		static jint RESULT_SUCCESS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Session2Command_Result(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Session2Command_Result(QAndroidJniObject obj);
		
		// Constructors
		Session2Command_Result(jint arg0, android::os::Bundle arg1);
		
		// Methods
		jint getResultCode() const;
		android::os::Bundle getResultData() const;
	};
} // namespace android::media

