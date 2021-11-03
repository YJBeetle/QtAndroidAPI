#pragma once

#include "../../../JObject.hpp"


namespace android::media::effect
{
	class Effect : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Effect(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Effect(QJniObject obj);
		
		// Constructors
		Effect();
		
		// Methods
		void apply(jint arg0, jint arg1, jint arg2, jint arg3);
		jstring getName();
		void release();
		void setParameter(jstring arg0, jobject arg1);
		void setUpdateListener(JObject arg0);
	};
} // namespace android::media::effect

