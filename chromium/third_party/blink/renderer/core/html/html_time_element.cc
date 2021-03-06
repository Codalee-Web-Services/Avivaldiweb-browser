// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/renderer/core/html/html_time_element.h"

#include "third_party/blink/renderer/core/frame/use_counter.h"

namespace blink {

HTMLTimeElement::HTMLTimeElement(Document& document)
    : HTMLElement(html_names::kTimeTag, document) {
  UseCounter::Count(document, WebFeature::kTimeElement);
}

HTMLTimeElement* HTMLTimeElement::Create(Document& document) {
  return MakeGarbageCollected<HTMLTimeElement>(document);
}

}  // namespace blink
