#pragma once

#include "./ResourceBundle.hpp"

class JArray;
class JObject;
class JString;

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
		JObject getKeys();
		JObject handleGetObject(JString arg0);
	};
} // namespace java::util

