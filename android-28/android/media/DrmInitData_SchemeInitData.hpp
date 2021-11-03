#pragma once

#include "../../JObject.hpp"


namespace android::media
{
	class DrmInitData_SchemeInitData : public JObject
	{
	public:
		// Fields
		jbyteArray data();
		jstring mimeType();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DrmInitData_SchemeInitData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DrmInitData_SchemeInitData(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace android::media

