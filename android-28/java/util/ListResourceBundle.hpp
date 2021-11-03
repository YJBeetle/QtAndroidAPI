#pragma once

#include "../../JObject.hpp"
#include "./ResourceBundle.hpp"


namespace java::util
{
	class ListResourceBundle : public java::util::ResourceBundle
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ListResourceBundle(const char *className, const char *sig, Ts...agv) : java::util::ResourceBundle(className, sig, std::forward<Ts>(agv)...) {}
		ListResourceBundle(QJniObject obj);
		
		// Constructors
		ListResourceBundle();
		
		// Methods
		JObject getKeys();
		jobject handleGetObject(jstring arg0);
	};
} // namespace java::util

