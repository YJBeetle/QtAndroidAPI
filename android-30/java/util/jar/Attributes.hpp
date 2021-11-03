#pragma once

#include "../../../JObject.hpp"

namespace java::io
{
	class DataOutputStream;
}
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
		jobject clone();
		jboolean containsKey(jobject arg0);
		jboolean containsValue(jobject arg0);
		JObject entrySet();
		jboolean equals(jobject arg0);
		jobject get(jobject arg0);
		jstring getValue(jstring arg0);
		jstring getValue(java::util::jar::Attributes_Name arg0);
		jint hashCode();
		jboolean isEmpty();
		JObject keySet();
		jobject put(jobject arg0, jobject arg1);
		void putAll(JObject arg0);
		jstring putValue(jstring arg0, jstring arg1);
		jobject remove(jobject arg0);
		jint size();
		JObject values();
	};
} // namespace java::util::jar

