#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace android::util
{
	class Pair : public JObject
	{
	public:
		// Fields
		JObject first();
		JObject second();
		
		// QJniObject forward
		template<typename ...Ts> explicit Pair(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Pair(QJniObject obj);
		
		// Constructors
		Pair(JObject arg0, JObject arg1);
		
		// Methods
		static android::util::Pair create(JObject arg0, JObject arg1);
		jboolean equals(JObject arg0);
		jint hashCode();
		JString toString();
	};
} // namespace android::util

