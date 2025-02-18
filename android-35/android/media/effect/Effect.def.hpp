#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;

namespace android::media::effect
{
	class Effect : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Effect(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Effect(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Effect();
		
		// Methods
		void apply(jint arg0, jint arg1, jint arg2, jint arg3) const;
		JString getName() const;
		void release() const;
		void setParameter(JString arg0, JObject arg1) const;
		void setUpdateListener(JObject arg0) const;
	};
} // namespace android::media::effect

