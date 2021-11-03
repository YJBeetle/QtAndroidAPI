#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace android::system
{
	class StructTimeval : public JObject
	{
	public:
		// Fields
		jlong tv_sec();
		jlong tv_usec();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StructTimeval(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StructTimeval(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::system::StructTimeval fromMillis(jlong arg0);
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		jlong toMillis() const;
		JString toString() const;
	};
} // namespace android::system

