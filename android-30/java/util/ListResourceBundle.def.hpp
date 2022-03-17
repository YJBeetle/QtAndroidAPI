#pragma once

#include "./ResourceBundle.def.hpp"

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
		ListResourceBundle(QAndroidJniObject obj) : java::util::ResourceBundle(obj) {}
		
		// Constructors
		ListResourceBundle();
		
		// Methods
		JObject getKeys() const;
		JObject handleGetObject(JString arg0) const;
	};
} // namespace java::util

