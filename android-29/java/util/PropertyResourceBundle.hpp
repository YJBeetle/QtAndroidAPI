#pragma once

#include "../../__JniBaseClass.hpp"
#include "./ResourceBundle.hpp"

namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class Reader;
}

namespace java::util
{
	class PropertyResourceBundle : public java::util::ResourceBundle
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PropertyResourceBundle(const char *className, const char *sig, Ts...agv) : java::util::ResourceBundle(className, sig, std::forward<Ts>(agv)...) {}
		PropertyResourceBundle(QAndroidJniObject obj);
		
		// Constructors
		PropertyResourceBundle(java::io::InputStream arg0);
		PropertyResourceBundle(java::io::Reader arg0);
		
		// Methods
		QAndroidJniObject getKeys();
		jobject handleGetObject(jstring arg0);
	};
} // namespace java::util

