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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Attributes(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Attributes(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Attributes();
		Attributes(jint arg0);
		Attributes(java::util::jar::Attributes &arg0);
		
		// Methods
		void clear() const;
		JObject clone() const;
		jboolean containsKey(JObject arg0) const;
		jboolean containsValue(JObject arg0) const;
		JObject entrySet() const;
		jboolean equals(JObject arg0) const;
		JObject get(JObject arg0) const;
		JString getValue(JString arg0) const;
		JString getValue(java::util::jar::Attributes_Name arg0) const;
		jint hashCode() const;
		jboolean isEmpty() const;
		JObject keySet() const;
		JObject put(JObject arg0, JObject arg1) const;
		void putAll(JObject arg0) const;
		JString putValue(JString arg0, JString arg1) const;
		JObject remove(JObject arg0) const;
		jint size() const;
		JObject values() const;
	};
} // namespace java::util::jar

