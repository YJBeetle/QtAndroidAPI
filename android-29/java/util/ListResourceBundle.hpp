#pragma once

#include "../../__JniBaseClass.hpp"
#include "./ResourceBundle.hpp"


namespace java::util
{
	class ListResourceBundle : public java::util::ResourceBundle
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ListResourceBundle(const char *className, const char *sig, Ts...agv) : java::util::ResourceBundle(className, sig, std::forward<Ts>(agv)...) {}
		ListResourceBundle(QAndroidJniObject obj);
		
		// Constructors
		ListResourceBundle();
		
		// Methods
		QAndroidJniObject getKeys();
		jobject handleGetObject(jstring arg0);
	};
} // namespace java::util

