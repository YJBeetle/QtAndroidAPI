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
		
		// QJniObject forward
		template<typename ...Ts> explicit AbstractMap_SimpleImmutableEntry(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AbstractMap_SimpleImmutableEntry(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AbstractMap_SimpleImmutableEntry(JObject arg0);
		AbstractMap_SimpleImmutableEntry(JObject arg0, JObject arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject getKey() const;
		JObject getValue() const;
		jint hashCode() const;
		JObject setValue(JObject arg0) const;
		JString toString() const;
	};
} // namespace java::util

