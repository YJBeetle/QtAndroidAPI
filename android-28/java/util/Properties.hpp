#pragma once

#include "./Hashtable.hpp"

class JCharArray;
namespace java::io
{
	class BufferedWriter;
}
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
namespace java::io
{
	class OutputStream;
}
namespace java::io
{
	class PrintStream;
}
namespace java::io
{
	class PrintWriter;
}
namespace java::io
{
	class Reader;
}
namespace java::io
{
	class Writer;
}
class JObject;
class JString;
namespace java::lang
{
	class StringBuilder;
}
namespace java::nio::charset
{
	class Charset;
}
namespace java::util::concurrent
{
	class ConcurrentHashMap;
}

namespace java::util
{
	class Properties : public java::util::Hashtable
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Properties(const char *className, const char *sig, Ts...agv) : java::util::Hashtable(className, sig, std::forward<Ts>(agv)...) {}
		Properties(QJniObject obj);
		
		// Constructors
		Properties();
		Properties(jint arg0);
		Properties(java::util::Properties &arg0);
		
		// Methods
		void clear() const;
		JObject clone() const;
		JObject compute(JObject arg0, JObject arg1) const;
		JObject computeIfAbsent(JObject arg0, JObject arg1) const;
		JObject computeIfPresent(JObject arg0, JObject arg1) const;
		jboolean contains(JObject arg0) const;
		jboolean containsKey(JObject arg0) const;
		jboolean containsValue(JObject arg0) const;
		JObject elements() const;
		JObject entrySet() const;
		jboolean equals(JObject arg0) const;
		void forEach(JObject arg0) const;
		JObject get(JObject arg0) const;
		JObject getOrDefault(JObject arg0, JObject arg1) const;
		JString getProperty(JString arg0) const;
		JString getProperty(JString arg0, JString arg1) const;
		jint hashCode() const;
		jboolean isEmpty() const;
		JObject keySet() const;
		JObject keys() const;
		void list(java::io::PrintStream arg0) const;
		void list(java::io::PrintWriter arg0) const;
		void load(java::io::InputStream arg0) const;
		void load(java::io::Reader arg0) const;
		void loadFromXML(java::io::InputStream arg0) const;
		JObject merge(JObject arg0, JObject arg1, JObject arg2) const;
		JObject propertyNames() const;
		JObject put(JObject arg0, JObject arg1) const;
		void putAll(JObject arg0) const;
		JObject putIfAbsent(JObject arg0, JObject arg1) const;
		jboolean remove(JObject arg0, JObject arg1) const;
		JObject remove(JObject arg0) const;
		jboolean replace(JObject arg0, JObject arg1, JObject arg2) const;
		JObject replace(JObject arg0, JObject arg1) const;
		void replaceAll(JObject arg0) const;
		void save(java::io::OutputStream arg0, JString arg1) const;
		JObject setProperty(JString arg0, JString arg1) const;
		jint size() const;
		void store(java::io::OutputStream arg0, JString arg1) const;
		void store(java::io::Writer arg0, JString arg1) const;
		void storeToXML(java::io::OutputStream arg0, JString arg1) const;
		void storeToXML(java::io::OutputStream arg0, JString arg1, JString arg2) const;
		void storeToXML(java::io::OutputStream arg0, JString arg1, java::nio::charset::Charset arg2) const;
		JObject stringPropertyNames() const;
		JString toString() const;
		JObject values() const;
	};
} // namespace java::util

