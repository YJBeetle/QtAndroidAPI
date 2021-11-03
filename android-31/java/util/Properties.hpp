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
		void clear();
		JObject clone();
		JObject compute(JObject arg0, JObject arg1);
		JObject computeIfAbsent(JObject arg0, JObject arg1);
		JObject computeIfPresent(JObject arg0, JObject arg1);
		jboolean contains(JObject arg0);
		jboolean containsKey(JObject arg0);
		jboolean containsValue(JObject arg0);
		JObject elements();
		JObject entrySet();
		jboolean equals(JObject arg0);
		void forEach(JObject arg0);
		JObject get(JObject arg0);
		JObject getOrDefault(JObject arg0, JObject arg1);
		JString getProperty(JString arg0);
		JString getProperty(JString arg0, JString arg1);
		jint hashCode();
		jboolean isEmpty();
		JObject keySet();
		JObject keys();
		void list(java::io::PrintStream arg0);
		void list(java::io::PrintWriter arg0);
		void load(java::io::InputStream arg0);
		void load(java::io::Reader arg0);
		void loadFromXML(java::io::InputStream arg0);
		JObject merge(JObject arg0, JObject arg1, JObject arg2);
		JObject propertyNames();
		JObject put(JObject arg0, JObject arg1);
		void putAll(JObject arg0);
		JObject putIfAbsent(JObject arg0, JObject arg1);
		jboolean remove(JObject arg0, JObject arg1);
		JObject remove(JObject arg0);
		jboolean replace(JObject arg0, JObject arg1, JObject arg2);
		JObject replace(JObject arg0, JObject arg1);
		void replaceAll(JObject arg0);
		void save(java::io::OutputStream arg0, JString arg1);
		JObject setProperty(JString arg0, JString arg1);
		jint size();
		void store(java::io::OutputStream arg0, JString arg1);
		void store(java::io::Writer arg0, JString arg1);
		void storeToXML(java::io::OutputStream arg0, JString arg1);
		void storeToXML(java::io::OutputStream arg0, JString arg1, JString arg2);
		void storeToXML(java::io::OutputStream arg0, JString arg1, java::nio::charset::Charset arg2);
		JObject stringPropertyNames();
		JString toString();
		JObject values();
	};
} // namespace java::util

