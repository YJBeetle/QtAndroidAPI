#pragma once

#include "../../../JObject.hpp"


namespace java::util::concurrent
{
	class Flow : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Flow(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Flow(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jint defaultBufferSize();
	};
} // namespace java::util::concurrent

