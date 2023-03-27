import { Component } from '@angular/core';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})
export class AppComponent {
  title = 'Arafat Hossain';

  constructor() {
    setTimeout(() => {
      this.title = "   :( oops! someting went wrong!";
    }, 2000);
  }
}
