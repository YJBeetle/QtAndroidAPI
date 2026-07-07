#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class CancellationSignal : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CancellationSignal(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CancellationSignal(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CancellationSignal();
		
		// Methods
		void cancel() const;
		jboolean isCanceled() const;
		void setOnCancelListener(JObject arg0) const;
		void throwIfCanceled() const;
	};
} // namespace android::os

