#pragma once

#include "../util/Properties.hpp"

class JArray;
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class ObjectInputStream;
}
class JClass;
class JObject;
class JString;
namespace java::security
{
	class Provider_Service;
}

namespace java::security
{
	class Provider : public java::util::Properties
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Provider(const char *className, const char *sig, Ts...agv) : java::util::Properties(className, sig, std::forward<Ts>(agv)...) {}
		Provider(QJniObject obj);
		
		// Constructors
		
		// Methods
		void clear();
		JObject compute(JObject arg0, JObject arg1);
		JObject computeIfAbsent(JObject arg0, JObject arg1);
		JObject computeIfPresent(JObject arg0, JObject arg1);
		java::security::Provider configure(JString arg0);
		JObject elements();
		JObject entrySet();
		void forEach(JObject arg0);
		JObject get(JObject arg0);
		JString getInfo();
		JString getName();
		JObject getOrDefault(JObject arg0, JObject arg1);
		JString getProperty(JString arg0);
		java::security::Provider_Service getService(JString arg0, JString arg1);
		JObject getServices();
		jdouble getVersion();
		JString getVersionStr();
		jboolean isConfigured();
		JObject keySet();
		JObject keys();
		void load(java::io::InputStream arg0);
		JObject merge(JObject arg0, JObject arg1, JObject arg2);
		JObject put(JObject arg0, JObject arg1);
		void putAll(JObject arg0);
		JObject putIfAbsent(JObject arg0, JObject arg1);
		jboolean remove(JObject arg0, JObject arg1);
		JObject remove(JObject arg0);
		jboolean replace(JObject arg0, JObject arg1, JObject arg2);
		JObject replace(JObject arg0, JObject arg1);
		void replaceAll(JObject arg0);
		JString toString();
		JObject values();
	};
} // namespace java::security

