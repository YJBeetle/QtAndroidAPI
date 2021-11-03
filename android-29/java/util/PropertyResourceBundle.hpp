#pragma once

#include "./ResourceBundle.hpp"

namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class Reader;
}
class JObject;
class JString;

namespace java::util
{
	class PropertyResourceBundle : public java::util::ResourceBundle
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PropertyResourceBundle(const char *className, const char *sig, Ts...agv) : java::util::ResourceBundle(className, sig, std::forward<Ts>(agv)...) {}
		PropertyResourceBundle(QJniObject obj);
		
		// Constructors
		PropertyResourceBundle(java::io::InputStream arg0);
		PropertyResourceBundle(java::io::Reader arg0);
		
		// Methods
		JObject getKeys();
		JObject handleGetObject(JString arg0);
	};
} // namespace java::util

