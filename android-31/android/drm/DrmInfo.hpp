#pragma once

#include "../../JObject.hpp"


namespace android::drm
{
	class DrmInfo : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DrmInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DrmInfo(QAndroidJniObject obj);
		
		// Constructors
		DrmInfo(jint arg0, jbyteArray arg1, jstring arg2);
		DrmInfo(jint arg0, jstring arg1, jstring arg2);
		
		// Methods
		jobject get(jstring arg0);
		jbyteArray getData();
		jint getInfoType();
		jstring getMimeType();
		JObject iterator();
		JObject keyIterator();
		void put(jstring arg0, jobject arg1);
	};
} // namespace android::drm

