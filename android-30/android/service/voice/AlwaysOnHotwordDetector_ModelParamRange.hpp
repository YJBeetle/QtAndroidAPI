#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::service::voice
{
	class AlwaysOnHotwordDetector_ModelParamRange : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlwaysOnHotwordDetector_ModelParamRange(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AlwaysOnHotwordDetector_ModelParamRange(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jint getEnd();
		jint getStart();
		jint hashCode();
		jstring toString();
	};
} // namespace android::service::voice

