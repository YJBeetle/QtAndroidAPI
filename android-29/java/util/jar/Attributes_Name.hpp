#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::util::jar
{
	class Attributes_Name : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CLASS_PATH();
		static QAndroidJniObject CONTENT_TYPE();
		static QAndroidJniObject EXTENSION_INSTALLATION();
		static QAndroidJniObject EXTENSION_LIST();
		static QAndroidJniObject EXTENSION_NAME();
		static QAndroidJniObject IMPLEMENTATION_TITLE();
		static QAndroidJniObject IMPLEMENTATION_URL();
		static QAndroidJniObject IMPLEMENTATION_VENDOR();
		static QAndroidJniObject IMPLEMENTATION_VENDOR_ID();
		static QAndroidJniObject IMPLEMENTATION_VERSION();
		static QAndroidJniObject MAIN_CLASS();
		static QAndroidJniObject MANIFEST_VERSION();
		static QAndroidJniObject MULTI_RELEASE();
		static QAndroidJniObject SEALED();
		static QAndroidJniObject SIGNATURE_VERSION();
		static QAndroidJniObject SPECIFICATION_TITLE();
		static QAndroidJniObject SPECIFICATION_VENDOR();
		static QAndroidJniObject SPECIFICATION_VERSION();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Attributes_Name(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Attributes_Name(QAndroidJniObject obj);
		
		// Constructors
		Attributes_Name(jstring arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
	};
} // namespace java::util::jar

