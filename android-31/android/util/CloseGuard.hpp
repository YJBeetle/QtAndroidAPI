#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::util
{
	class CloseGuard : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CloseGuard(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CloseGuard(QAndroidJniObject obj);
		
		// Constructors
		CloseGuard();
		
		// Methods
		void close() const;
		void open(JString arg0) const;
		void warnIfOpen() const;
	};
} // namespace android::util

