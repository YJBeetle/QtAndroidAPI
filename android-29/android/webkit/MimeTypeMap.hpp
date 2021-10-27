#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class MimeTypeMap : public __JniBaseClass
	{
	public:
		// Fields
		
		MimeTypeMap(QAndroidJniObject obj);
		// Constructors
		MimeTypeMap() = default;
		
		// Methods
		static jstring getFileExtensionFromUrl(jstring arg0);
		static jstring getFileExtensionFromUrl(const QString &arg0);
		static QAndroidJniObject getSingleton();
		jstring getExtensionFromMimeType(jstring arg0);
		jstring getExtensionFromMimeType(const QString &arg0);
		jstring getMimeTypeFromExtension(jstring arg0);
		jstring getMimeTypeFromExtension(const QString &arg0);
		jboolean hasExtension(jstring arg0);
		jboolean hasExtension(const QString &arg0);
		jboolean hasMimeType(jstring arg0);
		jboolean hasMimeType(const QString &arg0);
	};
} // namespace android::webkit

