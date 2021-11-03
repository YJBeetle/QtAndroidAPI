#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace java::util
{
	class AbstractMap_SimpleImmutableEntry : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractMap_SimpleImmutableEntry(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AbstractMap_SimpleImmutableEntry(QAndroidJniObject obj);
		
		// Constructors
		AbstractMap_SimpleImmutableEntry(JObject arg0);
		AbstractMap_SimpleImmutableEntry(JObject arg0, JObject arg1);
		
		// Methods
		jboolean equals(JObject arg0);
		JObject getKey();
		JObject getValue();
		jint hashCode();
		JObject setValue(JObject arg0);
		JString toString();
	};
} // namespace java::util

