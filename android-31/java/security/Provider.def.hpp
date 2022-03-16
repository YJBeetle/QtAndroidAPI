#pragma once

#include "../util/Properties.def.hpp"

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
		Provider(QJniObject obj) : java::util::Properties(obj) {}
		
		// Constructors
		
		// Methods
		void clear() const;
		JObject compute(JObject arg0, JObject arg1) const;
		JObject computeIfAbsent(JObject arg0, JObject arg1) const;
		JObject computeIfPresent(JObject arg0, JObject arg1) const;
		java::security::Provider configure(JString arg0) const;
		JObject elements() const;
		JObject entrySet() const;
		void forEach(JObject arg0) const;
		JObject get(JObject arg0) const;
		JString getInfo() const;
		JString getName() const;
		JObject getOrDefault(JObject arg0, JObject arg1) const;
		JString getProperty(JString arg0) const;
		java::security::Provider_Service getService(JString arg0, JString arg1) const;
		JObject getServices() const;
		jdouble getVersion() const;
		JString getVersionStr() const;
		jboolean isConfigured() const;
		JObject keySet() const;
		JObject keys() const;
		void load(java::io::InputStream arg0) const;
		JObject merge(JObject arg0, JObject arg1, JObject arg2) const;
		JObject put(JObject arg0, JObject arg1) const;
		void putAll(JObject arg0) const;
		JObject putIfAbsent(JObject arg0, JObject arg1) const;
		jboolean remove(JObject arg0, JObject arg1) const;
		JObject remove(JObject arg0) const;
		jboolean replace(JObject arg0, JObject arg1, JObject arg2) const;
		JObject replace(JObject arg0, JObject arg1) const;
		void replaceAll(JObject arg0) const;
		JString toString() const;
		JObject values() const;
	};
} // namespace java::security

