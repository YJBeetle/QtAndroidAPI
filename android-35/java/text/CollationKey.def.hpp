#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JObject;
class JString;

namespace java::text
{
	class CollationKey : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CollationKey(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CollationKey(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint compareTo(JObject arg0) const;
		jint compareTo(java::text::CollationKey arg0) const;
		JString getSourceString() const;
		JByteArray toByteArray() const;
	};
} // namespace java::text

