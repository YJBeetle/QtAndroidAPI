#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace android::renderscript
{
	class BaseObj : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BaseObj(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BaseObj(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void destroy();
		jboolean equals(JObject arg0);
		JString getName();
		jint hashCode();
		void setName(JString arg0);
	};
} // namespace android::renderscript

