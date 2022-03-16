#pragma once

#include "../../../JObject.hpp"

namespace java::util::concurrent
{
	class Flow : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Flow(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Flow(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jint defaultBufferSize();
	};
} // namespace java::util::concurrent

