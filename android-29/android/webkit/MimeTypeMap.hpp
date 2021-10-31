#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class MimeTypeMap : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MimeTypeMap(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MimeTypeMap(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring getFileExtensionFromUrl(jstring arg0);
		static QAndroidJniObject getSingleton();
		jstring getExtensionFromMimeType(jstring arg0);
		jstring getMimeTypeFromExtension(jstring arg0);
		jboolean hasExtension(jstring arg0);
		jboolean hasMimeType(jstring arg0);
	};
} // namespace android::webkit

