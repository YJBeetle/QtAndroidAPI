#pragma once

#include "../text/ClipboardManager.hpp"

namespace android::content
{
	class ClipData;
}
namespace android::content
{
	class ClipDescription;
}
class JString;

namespace android::content
{
	class ClipboardManager : public android::text::ClipboardManager
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ClipboardManager(const char *className, const char *sig, Ts...agv) : android::text::ClipboardManager(className, sig, std::forward<Ts>(agv)...) {}
		ClipboardManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void addPrimaryClipChangedListener(JObject arg0) const;
		void clearPrimaryClip() const;
		android::content::ClipData getPrimaryClip() const;
		android::content::ClipDescription getPrimaryClipDescription() const;
		JString getText() const;
		jboolean hasPrimaryClip() const;
		jboolean hasText() const;
		void removePrimaryClipChangedListener(JObject arg0) const;
		void setPrimaryClip(android::content::ClipData arg0) const;
		void setText(JString arg0) const;
	};
} // namespace android::content

