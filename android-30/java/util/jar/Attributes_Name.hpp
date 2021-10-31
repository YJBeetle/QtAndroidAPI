#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::util::jar
{
	class Attributes_Name : public __JniBaseClass
	{
	public:
		// Fields
		static java::util::jar::Attributes_Name CLASS_PATH();
		static java::util::jar::Attributes_Name CONTENT_TYPE();
		static java::util::jar::Attributes_Name EXTENSION_INSTALLATION();
		static java::util::jar::Attributes_Name EXTENSION_LIST();
		static java::util::jar::Attributes_Name EXTENSION_NAME();
		static java::util::jar::Attributes_Name IMPLEMENTATION_TITLE();
		static java::util::jar::Attributes_Name IMPLEMENTATION_URL();
		static java::util::jar::Attributes_Name IMPLEMENTATION_VENDOR();
		static java::util::jar::Attributes_Name IMPLEMENTATION_VENDOR_ID();
		static java::util::jar::Attributes_Name IMPLEMENTATION_VERSION();
		static java::util::jar::Attributes_Name MAIN_CLASS();
		static java::util::jar::Attributes_Name MANIFEST_VERSION();
		static java::util::jar::Attributes_Name MULTI_RELEASE();
		static java::util::jar::Attributes_Name SEALED();
		static java::util::jar::Attributes_Name SIGNATURE_VERSION();
		static java::util::jar::Attributes_Name SPECIFICATION_TITLE();
		static java::util::jar::Attributes_Name SPECIFICATION_VENDOR();
		static java::util::jar::Attributes_Name SPECIFICATION_VERSION();
		
		// QJniObject forward
		template<typename ...Ts> explicit Attributes_Name(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Attributes_Name(QJniObject obj);
		
		// Constructors
		Attributes_Name(jstring arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
	};
} // namespace java::util::jar

