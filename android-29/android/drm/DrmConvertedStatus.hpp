#pragma once

#include "../../JObject.hpp"


namespace android::drm
{
	class DrmConvertedStatus : public JObject
	{
	public:
		// Fields
		static jint STATUS_ERROR();
		static jint STATUS_INPUTDATA_ERROR();
		static jint STATUS_OK();
		jbyteArray convertedData();
		jint offset();
		jint statusCode();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DrmConvertedStatus(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DrmConvertedStatus(QAndroidJniObject obj);
		
		// Constructors
		DrmConvertedStatus(jint arg0, jbyteArray arg1, jint arg2);
		
		// Methods
	};
} // namespace android::drm

