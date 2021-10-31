#pragma once

#include "../../__JniBaseClass.hpp"
#include "./ResourceBundle.hpp"


namespace java::util
{
	class ListResourceBundle : public java::util::ResourceBundle
	{
	public:
		// Fields
		
		ListResourceBundle(QAndroidJniObject obj);
		// Constructors
		ListResourceBundle();
		
		// Methods
		QAndroidJniObject getKeys();
		jobject handleGetObject(jstring arg0);
	};
} // namespace java::util

