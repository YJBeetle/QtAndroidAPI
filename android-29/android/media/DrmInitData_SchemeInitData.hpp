#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class DrmInitData_SchemeInitData : public __JniBaseClass
	{
	public:
		// Fields
		jbyteArray data();
		jstring mimeType();
		
		// QJniObject forward
		template<typename ...Ts> explicit DrmInitData_SchemeInitData(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DrmInitData_SchemeInitData(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace android::media

