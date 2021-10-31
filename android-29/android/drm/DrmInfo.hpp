#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::drm
{
	class DrmInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DrmInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DrmInfo(QJniObject obj);
		
		// Constructors
		DrmInfo(jint arg0, jbyteArray arg1, jstring arg2);
		DrmInfo(jint arg0, jstring arg1, jstring arg2);
		
		// Methods
		jobject get(jstring arg0);
		jbyteArray getData();
		jint getInfoType();
		jstring getMimeType();
		__JniBaseClass iterator();
		__JniBaseClass keyIterator();
		void put(jstring arg0, jobject arg1);
	};
} // namespace android::drm

