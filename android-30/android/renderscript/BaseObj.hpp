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
		
		// QJniObject forward
		template<typename ...Ts> explicit BaseObj(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BaseObj(QJniObject obj);
		
		// Constructors
		
		// Methods
		void destroy() const;
		jboolean equals(JObject arg0) const;
		JString getName() const;
		jint hashCode() const;
		void setName(JString arg0) const;
	};
} // namespace android::renderscript

