#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace java::io
{
	class DataOutputStream;
}
class JObject;
class JString;
namespace java::util::jar
{
	class Attributes_Name;
}

namespace java::util::jar
{
	class Attributes : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Attributes(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Attributes(QJniObject obj);
		
		// Constructors
		Attributes();
		Attributes(jint arg0);
		Attributes(java::util::jar::Attributes &arg0);
		
		// Methods
		void clear();
		JObject clone();
		jboolean containsKey(JObject arg0);
		jboolean containsValue(JObject arg0);
		JObject entrySet();
		jboolean equals(JObject arg0);
		JObject get(JObject arg0);
		JString getValue(JString arg0);
		JString getValue(java::util::jar::Attributes_Name arg0);
		jint hashCode();
		jboolean isEmpty();
		JObject keySet();
		JObject put(JObject arg0, JObject arg1);
		void putAll(JObject arg0);
		JString putValue(JString arg0, JString arg1);
		JObject remove(JObject arg0);
		jint size();
		JObject values();
	};
} // namespace java::util::jar

